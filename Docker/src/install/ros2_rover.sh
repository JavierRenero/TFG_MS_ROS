#!/bin/bash

# clone
cd /root/ros2_ws/src
git clone -b humble-devel https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
git clone -b humble https://github.com/mgonzs13/ros2_rover.git

# rosdep
source /opt/ros/humble/setup.bash
cd /root/ros2_ws
rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -r -y

# colcon
source /opt/ros/humble/setup.bash
cd /root/ros2_ws
colcon build
echo 'export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/ros2_ws/src/turtlebot3_simulations/turtlebot3_gazebo/models' >> ~/.bashrc
source ~/.bashrc
