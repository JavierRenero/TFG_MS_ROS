import rospy
from std_msgs.msg import Float32
from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/battery', methods=['POST'])
def get_battery_level():
    robot_id = request.json['id']
    battery_level = battery_status(robot_id)
    return jsonify({'battery': battery_level})

def battery_status(robot_id):
    # Initialize ROS node
    rospy.init_node('battery_status_node', anonymous=True)

    # Create a publisher to send request to robot's battery topic
    battery_topic = f"/robot_{robot_id}/battery"
    rospy.loginfo(f"Subscribing to battery topic {battery_topic}")
    battery_publisher = rospy.Publisher(battery_topic, Float32, queue_size=10)

    # Wait for the robot to publish its battery status
    rospy.sleep(0.5)

    # Read the latest battery status from the robot's topic
    battery_status = battery_publisher.rospy.wait_for_message(battery_topic, Float32, timeout=5.0)

    return battery_status.data

if __name__ == '__main__':
    app.run(debug=True)
