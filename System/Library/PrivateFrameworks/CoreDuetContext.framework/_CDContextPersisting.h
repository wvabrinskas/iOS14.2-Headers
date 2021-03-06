/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDContextPersisting
@required
-(void)deleteRegistration:(id)arg1;
-(void)saveRegistration:(id)arg1;
-(id)loadValues;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2;
-(void)deleteDataCreatedBefore:(id)arg1;
-(id)loadRegistrations;
-(void)deleteAllData;

@end

