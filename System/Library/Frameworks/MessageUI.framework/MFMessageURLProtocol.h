/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/NSURLProtocol.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EFCancelable;
@class EFPromise, EMContentRepresentation, NSString;

@interface MFMessageURLProtocol : NSURLProtocol <EFLoggable> {

	id<EFCancelable> _cancelable;
	EFPromise* _promise;
	EMContentRepresentation* _contentRepresentation;

}

@property (nonatomic,retain) id<EFCancelable> cancelable;                                  //@synthesize cancelable=_cancelable - In the implementation block
@property (nonatomic,retain) EFPromise * promise;                                          //@synthesize promise=_promise - In the implementation block
@property (nonatomic,retain) EMContentRepresentation * contentRepresentation;              //@synthesize contentRepresentation=_contentRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)registerContentRepresentation:(id)arg1 ;
+(id)contentRepresentationForURL:(id)arg1 ;
+(void)setRegistry:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)log;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)registry;
-(void)setCancelable:(id<EFCancelable>)arg1 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)setPromise:(EFPromise *)arg1 ;
-(id)_cachedResponseWithData:(id)arg1 mimeType:(id)arg2 error:(id*)arg3 ;
-(EMContentRepresentation *)contentRepresentation;
-(void)setContentRepresentation:(EMContentRepresentation *)arg1 ;
-(EFPromise *)promise;
-(void)startLoading;
-(id<EFCancelable>)cancelable;
-(void)stopLoading;
-(void)dealloc;
@end

