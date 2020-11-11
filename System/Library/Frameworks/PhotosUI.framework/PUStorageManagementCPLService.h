/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXCPLUIStatusProvider, NSString;

@interface PUStorageManagementCPLService : NSObject <PXChangeObserver> {

	PXCPLUIStatusProvider* _cplUIStatusProvider;
	BOOL _hasCompletedInitialUpload;
	/*^block*/id _uploadCallbackHandler;

}

@property (nonatomic,readonly) BOOL hasCompletedInitialUpload;              //@synthesize hasCompletedInitialUpload=_hasCompletedInitialUpload - In the implementation block
@property (nonatomic,copy) id uploadCallbackHandler;                        //@synthesize uploadCallbackHandler=_uploadCallbackHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCPLService;
-(id)init;
-(void)_initCPLUIStatusProvider;
-(BOOL)hasCompletedInitialUpload;
-(id)uploadCallbackHandler;
-(void)setUploadCallbackHandler:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end
