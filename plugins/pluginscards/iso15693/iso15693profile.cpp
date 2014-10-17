/**
 * \file iso15693profile.cpp
 * \author Maxime C. <maxime-dev@islog.com>
 * \brief ISO15693 card profiles.
 */

#include "iso15693profile.hpp"

namespace logicalaccess
{
    ISO15693Profile::ISO15693Profile()
        : Profile()
    {
    }

    ISO15693Profile::~ISO15693Profile()
    {
    }

    void ISO15693Profile::setDefaultKeys()
    {
    }

    void ISO15693Profile::clearKeys()
    {
    }

    void ISO15693Profile::setDefaultKeysAt(std::shared_ptr<Location> /*location*/)
    {
    }

    void ISO15693Profile::setKeyAt(std::shared_ptr<Location> /*location*/, std::shared_ptr<AccessInfo> /*AccessInfo*/)
    {
    }

    std::shared_ptr<AccessInfo> ISO15693Profile::createAccessInfo() const
    {
        std::shared_ptr<AccessInfo> ret;
        return ret;
    }

    std::shared_ptr<Location> ISO15693Profile::createLocation() const
    {
        std::shared_ptr<ISO15693Location> ret;
        ret.reset(new ISO15693Location());
        return ret;
    }

    FormatList ISO15693Profile::getSupportedFormatList()
    {
        return Profile::getHIDWiegandFormatList();
    }
}