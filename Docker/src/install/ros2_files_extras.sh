#!/bin/bash

# clone

curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list >/dev/null

apt update

apt install python3-argcomplete python3-colcon-common-extensions python3-rosdep -y 

apt update
curl -sSL http://get.gazebosim.org | sh
apt install ros-humble-gazebo-ros-* ros-humble-cartographer ros-humble-cartographer-ros ros-humble-navigation2 ros-humble-nav2-bringup -y
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
apt install python3-pip -y
pip install flask
colcon build
echo 'export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/root/ros2_ws/src/turtlebot3_simulations/turtlebot3_gazebo/models' >> ~/.bashrc
echo 'export ROS_DOMAIN_ID=30 #TURTLEBOT3' >> ~/.bashrc
source /root/.bashrc
source /root/ros2_ws/install/setup.sh
