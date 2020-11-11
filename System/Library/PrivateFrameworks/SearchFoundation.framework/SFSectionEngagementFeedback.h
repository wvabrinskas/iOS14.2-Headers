/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFResultSection;

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying> {

	SFResultSection* _section;
	unsigned long long _triggerEvent;

}

@property (nonatomic,copy) SFResultSection * section;                      //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(SFResultSection *)section;
-(unsigned long long)triggerEvent;
-(id)initWithSection:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
