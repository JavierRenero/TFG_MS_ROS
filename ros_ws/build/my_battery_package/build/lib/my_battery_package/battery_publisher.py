import rclpy
import requests
from rclpy.node import Node
from my_battery_package.msg import BatteryLevel

class BatteryPublisher(Node):
    def __init__(self):
        super().__init__('battery_publisher')
        self.publisher_ = self.create_publisher(BatteryLevel, 'battery_topic', 10)
        self.timer_ = self.create_timer(1.0, self.publish_battery_level)
        self.battery_level_ = 0

    def publish_battery_level(self):
        msg = BatteryLevel()
        msg.level = self.battery_level_
        self.publisher_.publish(msg)
        self.battery_level_ += 1
        if self.battery_level_ > 100:
            self.battery_level_ = 0

        #requests.post('http://localhost:5000/battery')


def main(args=None):
    rclpy.init(args=args)
    publisher = BatteryPublisher()
    rclpy.spin(publisher)
    publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
