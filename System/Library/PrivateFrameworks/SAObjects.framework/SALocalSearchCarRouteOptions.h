/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)carRouteOptions;
+(id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)avoidTolls;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(BOOL)avoidHighways;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

