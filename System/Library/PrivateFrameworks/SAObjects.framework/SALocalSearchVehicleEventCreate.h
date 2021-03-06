/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString;

@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * notes; 
+(id)vehicleEventCreate;
+(id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)notes;
@end

