/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFOAuth2AuthorizationSession.h>

@class NSURL, WFOAuth2SessionManager, NSString, ASWebAuthenticationSession, WFWebAuthenticationSessionPresentationContext;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	NSURL* _authorizationURL;
	NSURL* _redirectURI;
	WFOAuth2SessionManager* _sessionManager;
	NSString* _responseType;
	NSString* _state;
	/*^block*/id _completionHandler;
	ASWebAuthenticationSession* _authenticationSession;
	WFWebAuthenticationSessionPresentationContext* _presentationContext;
	NSString* _responseKey;

}

@property (nonatomic,readonly) WFOAuth2SessionManager * sessionManager;                                        //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseType;                                                   //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,readonly) NSString * state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) ASWebAuthenticationSession * authenticationSession;                               //@synthesize authenticationSession=_authenticationSession - In the implementation block
@property (nonatomic,retain) WFWebAuthenticationSessionPresentationContext * presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) NSString * responseKey;                                                         //@synthesize responseKey=_responseKey - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authorizationURL;                                                  //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURI;                                                       //@synthesize redirectURI=_redirectURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWebAuthenticationSessionPresentationContext *)presentationContext;
-(NSURL *)authorizationURL;
-(ASWebAuthenticationSession *)authenticationSession;
-(void)setPresentationContext:(WFWebAuthenticationSessionPresentationContext *)arg1 ;
-(id)completionHandler;
-(NSString *)state;
-(NSString *)responseType;
-(NSString *)responseKey;
-(void)setCompletionHandler:(id)arg1 ;
-(WFOAuth2SessionManager *)sessionManager;
-(void)setAuthenticationSession:(ASWebAuthenticationSession *)arg1 ;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(NSURL *)redirectURI;
-(id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)authenticationSessionWithUserInterface:(id)arg1 ;
-(BOOL)resumeSessionWithResponseObject:(id)arg1 ;
@end
