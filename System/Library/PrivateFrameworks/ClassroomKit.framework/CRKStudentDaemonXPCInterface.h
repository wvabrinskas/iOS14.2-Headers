/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRKStudentDaemonXPCInterface
@required
-(void)fetchConfiguration:(/*^block*/id)arg1;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setActiveStudentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)studentDidAuthenticate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchResourceFromURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchConfigurationType:(/*^block*/id)arg1;
-(void)setAdHocConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAdHocConfiguration:(/*^block*/id)arg1;

@end
