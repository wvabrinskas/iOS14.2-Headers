/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRKClassKitRosterRequirements;
@class NSObject;

@interface CRKASMRosterUpdater : NSObject {

	NSObject*<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,readonly) NSObject*<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(id)initWithRequirements:(id)arg1 ;
-(NSObject*<CRKClassKitRosterRequirements>)requirements;
-(/*^block*/id)errorWrappingCompletionForCompletion:(/*^block*/id)arg1 selectorName:(id)arg2 ;
-(void)createClassOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)objectIDForCourseWithIdentifier:(id)arg1 inRoster:(id)arg2 error:(id*)arg3 ;
-(void)updateClassOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)courseWithIdentifier:(id)arg1 inRoster:(id)arg2 ;
-(void)createClassWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 roster:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeCourseWithIdentifier:(id)arg1 roster:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

