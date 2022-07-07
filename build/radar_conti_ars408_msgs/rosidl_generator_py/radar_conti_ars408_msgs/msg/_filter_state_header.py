# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FilterStateHeader(type):
    """Metaclass of message 'FilterStateHeader'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('radar_conti_ars408_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'radar_conti_ars408_msgs.msg.FilterStateHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__filter_state_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__filter_state_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__filter_state_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__filter_state_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__filter_state_header

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from std_msgs.msg import UInt8
            if UInt8.__class__._TYPE_SUPPORT is None:
                UInt8.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FilterStateHeader(metaclass=Metaclass_FilterStateHeader):
    """Message class 'FilterStateHeader'."""

    __slots__ = [
        '_header',
        '_filterstate_nofclusterfiltercfg',
        '_filterstate_nofobjectfiltercfg',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'filterstate_nofclusterfiltercfg': 'std_msgs/UInt8',
        'filterstate_nofobjectfiltercfg': 'std_msgs/UInt8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from std_msgs.msg import UInt8
        self.filterstate_nofclusterfiltercfg = kwargs.get('filterstate_nofclusterfiltercfg', UInt8())
        from std_msgs.msg import UInt8
        self.filterstate_nofobjectfiltercfg = kwargs.get('filterstate_nofobjectfiltercfg', UInt8())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.filterstate_nofclusterfiltercfg != other.filterstate_nofclusterfiltercfg:
            return False
        if self.filterstate_nofobjectfiltercfg != other.filterstate_nofobjectfiltercfg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def filterstate_nofclusterfiltercfg(self):
        """Message field 'filterstate_nofclusterfiltercfg'."""
        return self._filterstate_nofclusterfiltercfg

    @filterstate_nofclusterfiltercfg.setter
    def filterstate_nofclusterfiltercfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filterstate_nofclusterfiltercfg' field must be a sub message of type 'UInt8'"
        self._filterstate_nofclusterfiltercfg = value

    @property
    def filterstate_nofobjectfiltercfg(self):
        """Message field 'filterstate_nofobjectfiltercfg'."""
        return self._filterstate_nofobjectfiltercfg

    @filterstate_nofobjectfiltercfg.setter
    def filterstate_nofobjectfiltercfg(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'filterstate_nofobjectfiltercfg' field must be a sub message of type 'UInt8'"
        self._filterstate_nofobjectfiltercfg = value
