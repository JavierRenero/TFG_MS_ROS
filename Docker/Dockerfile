FROM osrf/ros:humble-desktop

USER root

COPY ./src/install/ros2_rover.sh $INST_SCRIPTS/
RUN chmod +x $INST_SCRIPTS/ros2_files_extras.sh && $INST_SCRIPTS/ros2_files_extras.sh
