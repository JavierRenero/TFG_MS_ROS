import rclpy
from rclpy.node import Node
from pkg_interfaces.msg import Batterylvl
import threading
from flask import Flask, jsonify, request, json
import signal

#global iRobot

class BatterySubscriber(Node):
    def __init__(self):
        super().__init__("battery_subscriber")
        """ #self.get_logger().info(str(iRobot))
        if self.iRobot is not "No data":
            self.get_logger().info("Subscribing to battery_topic_" + self.iRobot)
            self.subscription_ = self.create_subscription(
                Batterylvl, "battery_topic_" + self.iRobot, self.receive_battery_level, 10
            )
        else: """
        self.subscription_ = self.create_subscription(
                Batterylvl, "battery_topic_8LJ9", self.receive_battery_level, 10
            )
        self.battery_level = "No data"

    def receive_battery_level(self, msg):
        self.battery_level = msg.level


def ros2_thread(node):
    print("entering ros2 thread\n")
    rclpy.spin(node)
    print("\nleaving ros2 thread")


def sigint_handler(signal, frame):
    # SIGINT handler
    rclpy.shutdown()
    if prev_sigint_handler is not None:
        prev_sigint_handler(signal)

rclpy.init(args=None)
ros2_node = BatterySubscriber()
threading.Thread(target=ros2_thread, args=[ros2_node]).start()
prev_sigint_handler = signal.signal(signal.SIGINT, sigint_handler)

app = Flask(__name__)


@app.route("/battery", methods=["GET"])
def get_battery_level():
    try:
        # Clear the request body
        #   request.data = None
        # Retrieve the variable from the query parameters
        # variable = request.args.get("idRob")
        # ros2_node.get_logger().info("Received request for battery level of robot " + variable)
        # app.logger.info(type(variable))
        # ros2_node.iRobot = variable
        # Return your response
        return jsonify({"battery_level": str(ros2_node.battery_level)})

    except KeyError:
        return "Missing 'idRob' field in the query param", 400


def main():
    app.run(debug=True, use_reloader=False, host="0.0.0.0", port=5000)


if __name__ == "__main__":
    main()
