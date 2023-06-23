#!/bin/bash

# clone
cd /root/ros2_ws/src
git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
git clone https://github.com/JavierRenero/my_battery_package.git
git clone https://github.com/JavierRenero/pkg_interfaces.git
git clone https://github.com/JavierRenero/ms_sub.git

# rosdep
source /opt/ros/humble/setup.bash
cd /root/ros2_ws
rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -r -y

# colcon
source /opt/ros/humble/setup.bash
cd /root/ros2_ws
pip install flask
colcon build
echo 'export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/root/ros2_ws/src/turtlebot3_simulations/turtlebot3_gazebo/models' >> ~/.bashrc
echo 'export ROS_DOMAIN_ID=30 #TURTLEBOT3' >> ~/.bashrc
source ~/.bashrc
