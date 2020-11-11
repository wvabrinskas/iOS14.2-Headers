/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPTestObject.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSString, HKSPTestObject, NSDate, NSSet;

@interface HKSPMutableTestObject : HKSPTestObject <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (nonatomic,copy) NSString * testProperty; 
@property (nonatomic,copy) NSString * otherProperty; 
@property (nonatomic,retain) HKSPTestObject * testRelationship; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                    //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(id)init;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)testProperty;
-(NSString *)otherProperty;
-(HKSPTestObject *)testRelationship;
-(void)setTestProperty:(NSString *)arg1 ;
-(void)setOtherProperty:(NSString *)arg1 ;
-(void)setTestRelationship:(HKSPTestObject *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isMutable;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
