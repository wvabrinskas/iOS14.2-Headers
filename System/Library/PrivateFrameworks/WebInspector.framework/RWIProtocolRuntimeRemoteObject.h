/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolJSONObject, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * className; 
@property (nonatomic,retain) RWIProtocolJSONObject * value; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (nonatomic,copy) NSString * objectId; 
@property (assign,nonatomic) int size; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * classPrototype; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * preview; 
-(void)setSubtype:(long long)arg1 ;
-(long long)subtype;
-(RWIProtocolRuntimeObjectPreview *)preview;
-(void)setSize:(int)arg1 ;
-(NSString *)stringRepresentation;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(int)size;
-(id)initWithType:(long long)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(long long)type;
-(void)setPreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(RWIProtocolJSONObject *)value;
-(NSString *)className;
-(NSString *)objectId;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setClassPrototype:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)classPrototype;
@end
