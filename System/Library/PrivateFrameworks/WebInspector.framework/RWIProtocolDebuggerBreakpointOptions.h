/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * condition; 
@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) BOOL autoContinue; 
@property (assign,nonatomic) int ignoreCount; 
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)condition;
-(void)setCondition:(NSString *)arg1 ;
-(NSArray *)actions;
-(void)setAutoContinue:(BOOL)arg1 ;
-(BOOL)autoContinue;
-(void)setIgnoreCount:(int)arg1 ;
-(int)ignoreCount;
@end
