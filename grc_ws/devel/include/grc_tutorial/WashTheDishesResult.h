// Generated by gencpp from file grc_tutorial/WashTheDishesResult.msg
// DO NOT EDIT!


#ifndef GRC_TUTORIAL_MESSAGE_WASHTHEDISHESRESULT_H
#define GRC_TUTORIAL_MESSAGE_WASHTHEDISHESRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace grc_tutorial
{
template <class ContainerAllocator>
struct WashTheDishesResult_
{
  typedef WashTheDishesResult_<ContainerAllocator> Type;

  WashTheDishesResult_()
    : dishes_washed()  {
    }
  WashTheDishesResult_(const ContainerAllocator& _alloc)
    : dishes_washed(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _dishes_washed_type;
  _dishes_washed_type dishes_washed;





  typedef boost::shared_ptr< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> const> ConstPtr;

}; // struct WashTheDishesResult_

typedef ::grc_tutorial::WashTheDishesResult_<std::allocator<void> > WashTheDishesResult;

typedef boost::shared_ptr< ::grc_tutorial::WashTheDishesResult > WashTheDishesResultPtr;
typedef boost::shared_ptr< ::grc_tutorial::WashTheDishesResult const> WashTheDishesResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grc_tutorial

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'grc_tutorial': ['/home/arvind/ROS-tutorial/grc_ws/src/grc_tutorial/msg', '/home/arvind/ROS-tutorial/grc_ws/devel/share/grc_tutorial/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "71ead59b8b061c1cfe7f297d0e32bef2";
  }

  static const char* value(const ::grc_tutorial::WashTheDishesResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x71ead59b8b061c1cULL;
  static const uint64_t static_value2 = 0xfe7f297d0e32bef2ULL;
};

template<class ContainerAllocator>
struct DataType< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grc_tutorial/WashTheDishesResult";
  }

  static const char* value(const ::grc_tutorial::WashTheDishesResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
# Result\n\
\n\
string[] dishes_washed\n\
";
  }

  static const char* value(const ::grc_tutorial::WashTheDishesResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dishes_washed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WashTheDishesResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grc_tutorial::WashTheDishesResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grc_tutorial::WashTheDishesResult_<ContainerAllocator>& v)
  {
    s << indent << "dishes_washed[]" << std::endl;
    for (size_t i = 0; i < v.dishes_washed.size(); ++i)
    {
      s << indent << "  dishes_washed[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dishes_washed[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRC_TUTORIAL_MESSAGE_WASHTHEDISHESRESULT_H