/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCloudKitMirroringImportRequest, NSCloudKitMirroringExportRequest, NSCloudKitMirroringDelegateSetupRequest, NSCloudKitMirroringDelegateResetRequest, NSCloudKitMirroringResetZoneRequest, NSCloudKitMirroringFetchRecordsRequest, NSCloudKitMirroringResetMetadataRequest, NSCloudKitMirroringDelegateSerializationRequest, NSCloudKitMirroringInitializeSchemaRequest, NSCloudKitMirroringExportProgressRequest, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringRequestManager : NSObject {

	NSCloudKitMirroringImportRequest* _pendingImportRequest;
	NSCloudKitMirroringExportRequest* _pendingExportRequest;
	NSCloudKitMirroringDelegateSetupRequest* _pendingSetupRequest;
	NSCloudKitMirroringDelegateResetRequest* _pendingDelegateResetRequest;
	NSCloudKitMirroringResetZoneRequest* _pendingResetRequest;
	NSCloudKitMirroringFetchRecordsRequest* _pendingFetchRecordsRequest;
	NSCloudKitMirroringResetMetadataRequest* _pendingResetMetadataRequest;
	NSCloudKitMirroringDelegateSerializationRequest* _pendingSerializationRequest;
	NSCloudKitMirroringInitializeSchemaRequest* _pendingInitializeSchemaRequest;
	NSCloudKitMirroringExportProgressRequest* _pendingExportProgressRequest;
	NSCloudKitMirroringRequest* _activeRequest;

}

@property (nonatomic,readonly) NSCloudKitMirroringImportRequest * pendingImportRequest;                                    //@synthesize pendingImportRequest=_pendingImportRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringExportRequest * pendingExportRequest;                                    //@synthesize pendingExportRequest=_pendingExportRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateSetupRequest * pendingSetupRequest;                              //@synthesize pendingSetupRequest=_pendingSetupRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateResetRequest * pendingDelegateResetRequest;                      //@synthesize pendingDelegateResetRequest=_pendingDelegateResetRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringResetZoneRequest * pendingResetRequest;                                  //@synthesize pendingResetRequest=_pendingResetRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringFetchRecordsRequest * pendingFetchRecordsRequest;                        //@synthesize pendingFetchRecordsRequest=_pendingFetchRecordsRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringResetMetadataRequest * pendingResetMetadataRequest;                      //@synthesize pendingResetMetadataRequest=_pendingResetMetadataRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringRequest * activeRequest;                                                 //@synthesize activeRequest=_activeRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateSerializationRequest * pendingSerializationRequest;              //@synthesize pendingSerializationRequest=_pendingSerializationRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringInitializeSchemaRequest * pendingInitializeSchemaRequest;                //@synthesize pendingInitializeSchemaRequest=_pendingInitializeSchemaRequest - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringExportProgressRequest * pendingExportProgressRequest;                    //@synthesize pendingExportProgressRequest=_pendingExportProgressRequest - In the implementation block
-(NSCloudKitMirroringFetchRecordsRequest *)pendingFetchRecordsRequest;
-(NSCloudKitMirroringExportProgressRequest *)pendingExportProgressRequest;
-(NSCloudKitMirroringDelegateSerializationRequest *)pendingSerializationRequest;
-(NSCloudKitMirroringDelegateResetRequest *)pendingDelegateResetRequest;
-(NSCloudKitMirroringRequest *)activeRequest;
-(id)dequeueAllPendingRequests;
-(id)dequeueNextRequest;
-(NSCloudKitMirroringExportRequest *)pendingExportRequest;
-(NSCloudKitMirroringImportRequest *)pendingImportRequest;
-(NSCloudKitMirroringResetMetadataRequest *)pendingResetMetadataRequest;
-(NSCloudKitMirroringDelegateSetupRequest *)pendingSetupRequest;
-(NSCloudKitMirroringInitializeSchemaRequest *)pendingInitializeSchemaRequest;
-(void)requestFinished:(id)arg1 ;
-(BOOL)enqueueRequest:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(NSCloudKitMirroringResetZoneRequest *)pendingResetRequest;
@end
