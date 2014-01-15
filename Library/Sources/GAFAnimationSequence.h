#pragma once

#ifndef __GAF_ANIMATION_SEQUENCE_H__
#define __GAF_ANIMATION_SEQUENCE_H__

using namespace cocos2d;

class GAFAnimationSequence : public CCObject
{
public:
    std::string name;
    int startFrameNo;
    int endFrameNo;
    inline int length() const
    {
        return endFrameNo - startFrameNo;
    }
};

#endif // __GAF_ANIMATION_SEQUENCE_H__
