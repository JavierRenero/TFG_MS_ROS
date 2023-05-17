import rclpy
from rclpy.node import Node
from my_battery_package.msg import BatteryLevel
from flask import Flask, jsonify

app = Flask(__name__)
battery_level = 0

class BatterySubscriber(Node):
    def __init__(self):
        super().__init__('battery_subscriber')
        self.subscription_ = self.create_subscription(
            BatteryLevel,
            'battery_topic',
            self.receive_battery_level,
            10
        )

    def receive_battery_level(self, msg):
        global battery_level
        battery_level = msg.level

@app.route('/battery', methods=['GET'])
def get_battery_level():
    return jsonify({'level': battery_level})

def main(args=None):
    rclpy.init(args=args)
    subscriber = BatterySubscriber()
    rclpy.spin(subscriber)
    subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
