#!/bin/bash

wget -q -O - https://dl.google.com/linux/linux_signing_key.pub | sudo apt-key add -
apt update
apt install curl wget gnupg2 lsb-release git nano apt-utils bash-completion -y
apt install python3-pip python3-setuptools python3-wheel -y
echo "source /usr/share/bash-completion/bash_completion" >>/root/.bashrc 

curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list >/dev/null

apt update
apt upgrade -y

apt install python3-argcomplete python3-colcon-common-extensions python3-rosdep -y 

apt update
curl -sSL http://get.gazebosim.org | sh
apt install ros-humble-gazebo-ros-* ros-humble-cartographer ros-humble-cartographer-ros ros-humble-navigation2 ros-humble-nav2-bringup -y
apt install ros-humble-turtlebot3-msgs ros-humble-dynamixel-sdk ros-humble-turtlebot3 ros-humble-hls-lfcd-lds-driver -y

mkdir -p /root/ros2_ws/src

cd /root
git clone https://github.com/mgonzs13/ros2_utils_scripts.git
echo "source ${PWD}/ros2_utils_scripts/scripts/all.sh" >>/root/.bashrc
echo "rosconfig -d humble -w /root/ros2_ws" >>/root/.bashrc
