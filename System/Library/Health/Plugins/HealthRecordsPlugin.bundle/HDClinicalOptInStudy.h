/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol HDClinicalOptInStudyDelegate;
@class NSOperationQueue, NSURLSession, HDProfile, NSMutableDictionary, NSString, HKHealthWrapMessageConfiguration;

@interface HDClinicalOptInStudy : NSObject <NSURLSessionDelegate> {

	NSOperationQueue* _operationQueue;
	NSURLSession* _session;
	os_unfair_lock_s _ivarLock;
	BOOL _readyForAnalyticsSubmission;
	unsigned short _port;
	id<HDClinicalOptInStudyDelegate> _delegate;
	HDProfile* _profile;
	long long _environment;
	NSMutableDictionary* _responses;
	NSMutableDictionary* _inputStreams;
	NSString* _authorizationKey;
	NSString* _certString;
	NSString* _channel;
	NSString* _scheme;
	NSString* _hostname;
	NSString* _studyID;
	NSString* _subjectID;
	NSString* _subjectToken;
	SecCertificateRef _certificate;
	HKHealthWrapMessageConfiguration* _healthWrapConfiguration;
	NSString* _healthCloudDirectoryPath;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) long long environment;                                                 //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSURLSession * session; 
@property (nonatomic,readonly) NSMutableDictionary * responses;                                       //@synthesize responses=_responses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * inputStreams;                                    //@synthesize inputStreams=_inputStreams - In the implementation block
@property (assign,nonatomic) BOOL readyForAnalyticsSubmission;                                        //@synthesize readyForAnalyticsSubmission=_readyForAnalyticsSubmission - In the implementation block
@property (nonatomic,readonly) NSString * authorizationKey;                                           //@synthesize authorizationKey=_authorizationKey - In the implementation block
@property (nonatomic,readonly) NSString * certString;                                                 //@synthesize certString=_certString - In the implementation block
@property (nonatomic,readonly) NSString * channel;                                                    //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * scheme;                                                     //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,readonly) NSString * hostname;                                                   //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * studyID;                                                    //@synthesize studyID=_studyID - In the implementation block
@property (nonatomic,retain) NSString * subjectID;                                                    //@synthesize subjectID=_subjectID - In the implementation block
@property (nonatomic,retain) NSString * subjectToken;                                                 //@synthesize subjectToken=_subjectToken - In the implementation block
@property (assign,nonatomic) SecCertificateRef certificate;                                           //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,retain) HKHealthWrapMessageConfiguration * healthWrapConfiguration;              //@synthesize healthWrapConfiguration=_healthWrapConfiguration - In the implementation block
@property (nonatomic,readonly) NSString * healthCloudDirectoryPath;                                   //@synthesize healthCloudDirectoryPath=_healthCloudDirectoryPath - In the implementation block
@property (assign,nonatomic,__weak) id<HDClinicalOptInStudyDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSString *)scheme;
-(unsigned short)port;
-(NSMutableDictionary *)responses;
-(id)initWithProfile:(id)arg1 environment:(long long)arg2 ;
-(NSString *)channel;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)_keyValueDomain;
-(BOOL)_lock_loadHealthWrapConfigurationWithError:(id*)arg1 ;
-(id<HDClinicalOptInStudyDelegate>)delegate;
-(NSString *)authorizationKey;
-(void)setSubjectToken:(NSString *)arg1 ;
-(BOOL)_lock_loadCertificateWithError:(id*)arg1 ;
-(void)setSubjectID:(NSString *)arg1 ;
-(id)_subjectIDKey;
-(id)_uploadURL;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(BOOL)_removeDirectory:(id)arg1 error:(id*)arg2 ;
-(HKHealthWrapMessageConfiguration *)healthWrapConfiguration;
-(void)setHealthWrapConfiguration:(HKHealthWrapMessageConfiguration *)arg1 ;
-(BOOL)_createDirectory:(id)arg1 error:(id*)arg2 ;
-(void)enableDataCollection;
-(void)setDelegate:(id<HDClinicalOptInStudyDelegate>)arg1 ;
-(HDProfile *)profile;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSString *)subjectToken;
-(NSString *)hostname;
-(void)_lock_enableDataCollectionIfNecessary;
-(BOOL)submitJSONAnalyticsData:(id)arg1 error:(id*)arg2 ;
-(id)_healthCloudUploadDirectoryPath;
-(NSString *)studyID;
-(long long)environment;
-(NSString *)healthCloudDirectoryPath;
-(SecCertificateRef)certificate;
-(NSString *)subjectID;
-(id)_subjectTokenKey;
-(void)setReadyForAnalyticsSubmission:(BOOL)arg1 ;
-(BOOL)_submitAnalyticsData:(id)arg1 error:(id*)arg2 ;
-(void)_registerDevice;
-(id)currentSubjectID;
-(id)_registrationURL;
-(NSURLSession *)session;
-(NSMutableDictionary *)inputStreams;
-(void)setCertificate:(SecCertificateRef)arg1 ;
-(BOOL)triggerOptInAnalyticsDataUploadToHealthCloudWithError:(id*)arg1 ;
-(NSString *)certString;
-(BOOL)_uploadSubmittedAnalyticsDataWithError:(id*)arg1 ;
-(BOOL)cleanWithError:(id*)arg1 ;
-(BOOL)readyForAnalyticsSubmission;
@end

