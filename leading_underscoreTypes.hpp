#ifndef LEADING_UNDERSCORE_TYPES_HPP
#define LEADING_UNDERSCORE_TYPES_HPP

namespace leading_underscore
{
    namespace _foo
    {
        namespace _bar
        {
            enum _EnumType { OK };
            struct _LocalType {
                _EnumType field_name;
            };
        }
    }
}

#endif

