/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMLocationShareActionChatItem : IMTranscriptChatItem {

	IMHandle* _sender;
	IMHandle* _otherHandle;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) long long direction; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) IMHandle * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
-(Class)__ck_chatItemClass;
-(long long)direction;
-(long long)actionType;
-(IMHandle *)sender;
-(BOOL)isFromMe;
-(IMHandle *)otherHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3 ;
@end

