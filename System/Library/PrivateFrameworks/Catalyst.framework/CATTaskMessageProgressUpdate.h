/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskMessage.h>

@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage {

	CATTaskProgress* _progress;

}

@property (nonatomic,copy) CATTaskProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTaskUUID:(id)arg1 progress:(id)arg2 ;
-(CATTaskProgress *)progress;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgress:(CATTaskProgress *)arg1 ;
@end
