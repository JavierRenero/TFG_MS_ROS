#!/bin/bash

# clone
apt update

apt install python3-argcomplete python3-colcon-common-extensions python3-rosdep -y 

apt update
apt install gazebo11
apt install ros-humble-gazebo-ros-pkg ros-humble-cartographer ros-humble-cartographer-ros ros-humble-navigation2 ros-humble-nav2-bringup -y
apt install ros-humble-turtlebot3-msgs ros-humble-dynamixel-sdk ros-humble-turtlebot3 ros-humble-hls-lfcd-lds-driver -y

mkdir -p /root/ros2_ws/src
cd /root/ros2_ws/src
git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
git clone https://github.com/JavierRenero/my_battery_package.git
git clone https://github.com/JavierRenero/pkg_interfaces.git
git clone https://github.com/JavierRenero/ms_sub.git

# rosdep
#source /opt/ros/humble/setup.bash
#cd /root/ros2_ws
#rosdep init
#rosdep update
#rosdep install --from-paths src --ignore-src -r -y

# colcon
source /opt/ros/humble/setup.bash
cd /root/ros2_ws
apt install python3-pip
pip install flask
colcon build
echo 'export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/ros2_ws/src/turtlebot3_simulations/turtlebot3_gazebo/models' >> ~/.bashrc
echo 'export ROS_DOMAIN_ID=30 #TURTLEBOT3' >> ~/.bashrc
source ~/.bashrc
source /root/ros2_ws/install/setup.sh
