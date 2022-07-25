from launch import LaunchDescription
from launch_ros.actions import Node



def generate_launch_description():

    return LaunchDescription([
        Node(package ='radar_conti_ars408', executable='subscriber_member_function', name = 'subscriber', output='screen')
    ])