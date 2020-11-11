/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSSecureCoding;
@class SGDWorkQueueName, NSString, NSObject;

@interface SGDWorkQueueItem : NSObject {

	SGDWorkQueueName* _name;
	NSString* _filename;
	NSObject*<NSSecureCoding> _object;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long fails; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * queueId; 
-(void)finish;
-(unsigned long long)fails;
-(void)markAsFailed;
-(unsigned long long)state;
-(id)description;
-(NSString *)queueId;
-(NSObject*<NSSecureCoding>)object;
-(void)dealloc;
-(id)initWithObject:(id)arg1 name:(id)arg2 dir:(id)arg3 ;
@end
