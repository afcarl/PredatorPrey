////////////////////////////////////////////////////////////////////////////////
// file: ieowner.cpp
// author: Mike Christian, AI Game Programming Wisdom I
////////////////////////////////////////////////////////////////////////////////

#include "ieowner.h"
#include "ie.h"

void IEOwner::think ()
{
    if ( m_brain )
        m_brain->update();
}
