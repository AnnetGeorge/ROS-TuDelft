// Generated by gencpp from file hrwros_msgs/CounterWithDelayAction.msg
// DO NOT EDIT!


#ifndef HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYACTION_H
#define HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hrwros_msgs/CounterWithDelayActionGoal.h>
#include <hrwros_msgs/CounterWithDelayActionResult.h>
#include <hrwros_msgs/CounterWithDelayActionFeedback.h>

namespace hrwros_msgs
{
template <class ContainerAllocator>
struct CounterWithDelayAction_
{
  typedef CounterWithDelayAction_<ContainerAllocator> Type;

  CounterWithDelayAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  CounterWithDelayAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::hrwros_msgs::CounterWithDelayActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::hrwros_msgs::CounterWithDelayActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::hrwros_msgs::CounterWithDelayActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> const> ConstPtr;

}; // struct CounterWithDelayAction_

typedef ::hrwros_msgs::CounterWithDelayAction_<std::allocator<void> > CounterWithDelayAction;

typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayAction > CounterWithDelayActionPtr;
typedef boost::shared_ptr< ::hrwros_msgs::CounterWithDelayAction const> CounterWithDelayActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/melodic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hrwros_msgs': ['/home/annet/ros/hrwros_ws/src/hrwros/hrwros_msgs/msg', '/home/annet/ros/hrwros_ws/devel/.private/hrwros_msgs/share/hrwros_msgs/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3510064e2e8600da6f7a564f41861085";
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3510064e2e8600daULL;
  static const uint64_t static_value2 = 0x6f7a564f41861085ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_msgs/CounterWithDelayAction";
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"CounterWithDelayActionGoal action_goal\n"
"CounterWithDelayActionResult action_result\n"
"CounterWithDelayActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: hrwros_msgs/CounterWithDelayActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"CounterWithDelayGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: hrwros_msgs/CounterWithDelayGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"uint32 num_counts		# Goal message: number of counts to count up to.\n"
"\n"
"================================================================================\n"
"MSG: hrwros_msgs/CounterWithDelayActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"CounterWithDelayResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: hrwros_msgs/CounterWithDelayResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string result_message		# Result message: simple string message for the result.\n"
"\n"
"================================================================================\n"
"MSG: hrwros_msgs/CounterWithDelayActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"CounterWithDelayFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: hrwros_msgs/CounterWithDelayFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"uint32 counts_elapsed		# Feedback message: number of counts elapsed.\n"
"\n"
;
  }

  static const char* value(const ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CounterWithDelayAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_msgs::CounterWithDelayAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::hrwros_msgs::CounterWithDelayActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::hrwros_msgs::CounterWithDelayActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::hrwros_msgs::CounterWithDelayActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_MSGS_MESSAGE_COUNTERWITHDELAYACTION_H
