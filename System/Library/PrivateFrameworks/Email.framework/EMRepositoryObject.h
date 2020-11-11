/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMObject.h>
#import <libobjc.A.dylib/EMRepositoryObject.h>
@class EMRepository;


@protocol EMRepositoryObject <NSObject>
@property (nonatomic,retain) EMRepository * repository; 
@required
-(void)setRepository:(id)arg1;
-(EMRepository *)repository;

@end


@class EMRepository, NSString;

@interface EMRepositoryObject : EMObject <EMRepositoryObject> {

	EMRepository* _repository;

}

@property (nonatomic,retain) EMRepository * repository;              //@synthesize repository=_repository - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRepository:(EMRepository *)arg1 ;
-(EMRepository *)repository;
@end
