/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
#import <libobjc.A.dylib/GEODataSessionUpdatableTask.h>

@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, NSObject, OS_voucher;
@class NSError, GEODataRequest, NSObject, NSURLSessionTask, NSData, NSMutableData, NSURLSessionTaskMetrics, NSDate, NSString, NSURL, NSHTTPURLResponse, NSURLRequest, GEOClientMetrics;

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask> {

	id<GEODataSessionTaskDelegate> _delegate;
	GEODataRequest* _request;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSURLSessionTask* _backingTask;
	NSError* _nonBackingTaskError;
	NSData* _cachedData;
	NSMutableData* _receivedData;
	NSURLSessionTaskMetrics* _urlTaskMetrics;
	double _startTime;
	double _endTime;
	SCD_Struct_GE91 _requestKind;
	BOOL _mptcpNegotiated;
	BOOL _receivedRNFNotification;
	float _priority;
	unsigned _sessionIdentifier;
	BOOL _backingTaskNeedsResume;
	BOOL _finished;
	unsigned _qos;
	NSObject*<OS_os_activity> _activity;
	id<NSObject> _parsedResponse;
	NSDate* _originalStartDate;
	NSObject*<OS_voucher> _voucher;

}

@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double loadTime; 
@property (nonatomic,readonly) NSString * entityTag; 
@property (nonatomic,readonly) NSString * contentLengthString; 
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (nonatomic,readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) long long HTTPStatusCode; 
@property (nonatomic,readonly) NSURL * originalRequestURL; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                            //@synthesize activity=_activity - In the implementation block
@property (nonatomic,__weak,readonly) id<GEODataSessionTaskDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) GEODataRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) double startTime;                                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                                 //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * backingTask;                                //@synthesize backingTask=_backingTask - In the implementation block
@property (assign,nonatomic) unsigned sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL receivedRNFNotification;                                    //@synthesize receivedRNFNotification=_receivedRNFNotification - In the implementation block
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,readonly) NSHTTPURLResponse * response; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,readonly) NSURLRequest * originalURLRequest; 
@property (nonatomic,readonly) SCD_Struct_GE91 requestKind;                                   //@synthesize requestKind=_requestKind - In the implementation block
@property (assign) float priority; 
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) NSURLSessionTaskMetrics * urlTaskMetrics;                      //@synthesize urlTaskMetrics=_urlTaskMetrics - In the implementation block
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated;                                          //@synthesize mptcpNegotiated=_mptcpNegotiated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2 ;
-(BOOL)failedDueToCancel;
-(unsigned long long)incomingPayloadSize;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(BOOL)validateTileResponse:(BOOL)arg1 error:(id*)arg2 ;
-(NSURL *)originalRequestURL;
-(double)loadTimeIncludingTask:(id)arg1 ;
-(NSString *)entityTag;
-(long long)HTTPStatusCode;
-(double)loadTime;
-(BOOL)protocolBufferHasPreamble;
-(id<NSObject>)parsedResponse;
-(NSData *)receivedData;
-(GEODataRequest *)request;
-(void)start;
-(void)didCollectMetrics:(id)arg1 ;
-(double)elapsedTime;
-(unsigned long long)outgoingPayloadSize;
-(NSURL *)downloadedFileURL;
-(void)_start;
-(NSString *)remoteAddressAndPort;
-(id)init;
-(id<GEODataSessionTaskDelegate>)delegate;
-(BOOL)validateContentLengthWithError:(id*)arg1 ;
-(BOOL)receivedRNFNotification;
-(NSData *)cachedData;
-(double)startTime;
-(BOOL)mptcpNegotiated;
-(GEOClientMetrics *)clientMetrics;
-(SCD_Struct_GE91)requestKind;
-(NSError *)error;
-(unsigned long long)requestedMultipathServiceType;
-(NSString *)debugDescription;
-(void)setReceivedRNFNotification:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createURLRequest;
-(void)delegateAsync:(/*^block*/id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSURLSessionTask *)backingTask;
-(unsigned long long)contentLength;
-(void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2 ;
-(BOOL)validateNonEmptyResponseWithError:(id*)arg1 ;
-(NSURLRequest *)originalURLRequest;
-(unsigned)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(NSString *)description;
-(NSURLSessionTaskMetrics *)urlTaskMetrics;
-(BOOL)finished;
-(void)setParsedResponse:(id<NSObject>)arg1 ;
-(void)_prepareForRestart;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
-(void)notifyDelegateWithSession:(id)arg1 ;
-(id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2 ;
-(NSString *)contentLengthString;
-(float)priority;
-(void)didReceiveData:(id)arg1 ;
-(void)setPriority:(float)arg1 ;
-(void)didReceiveResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCachedData:(NSData *)arg1 ;
-(void)updateRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSHTTPURLResponse *)response;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(SCD_Struct_GE91)arg4 priority:(float)arg5 ;
-(void)cancel;
-(NSObject*<OS_os_activity>)activity;
@end

