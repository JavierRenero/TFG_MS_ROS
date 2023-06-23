FROM osrf/ros:humble-desktop

USER root

COPY ./src/install/ros2_utils.sh $INST_SCRIPTS/
RUN chmod +x $INST_SCRIPTS/ros2_utils.sh && $INST_SCRIPTS/ros2_utils.sh

COPY ./src/install/ros2_files_extras.sh $INST_SCRIPTS/
RUN chmod +x $INST_SCRIPTS/ros2_files_extras.sh && $INST_SCRIPTS/ros2_files_extras.sh

# COPY ./src/install/ros_entrypoint.sh $INST_SCRIPTS/ros_entrypoint.sh
# RUN chmod +x $INST_SCRIPTS/ros_entrypoint.sh && $INST_SCRIPTS/ros_entrypoint.sh