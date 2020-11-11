/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, AMSMetricsEvent, NSURL, NSObject, NSURLRequest;

@interface AMSFollowUpAction : NSObject {

	NSMutableDictionary* _userInfo;
	NSString* _identifier;
	NSString* _label;
	AMSMetricsEvent* _metricsEvent;
	NSURL* _url;
	NSString* _backingIdentifier;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _actionQueue;

}

@property (nonatomic,retain) NSString * backingIdentifier;                            //@synthesize backingIdentifier=_backingIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> actionQueue;                //@synthesize actionQueue=_actionQueue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                          //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSString * parentIdentifier; 
@property (nonatomic,retain) NSString * preferredClient; 
@property (nonatomic,retain) NSURLRequest * request; 
@property (assign,nonatomic) BOOL requiresFollowUpUI; 
@property (assign,nonatomic) BOOL shouldClear; 
@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo; 
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(NSString *)label;
-(NSURLRequest *)request;
-(NSMutableDictionary *)userInfo;
-(NSString *)logKey;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURL *)url;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)identifier;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithLabel:(id)arg1 parentIdentifier:(id)arg2 ;
-(void)setPreferredClient:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)backingIdentifier;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(id)initWithAction:(id)arg1 parentIdentifier:(id)arg2 ;
-(void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)preferredClient;
-(BOOL)requiresFollowUpUI;
-(id)performActionsWithBag:(id)arg1 account:(id)arg2 ;
-(id)initWithItem:(id)arg1 action:(id)arg2 ;
-(void)setRequiresFollowUpUI:(BOOL)arg1 ;
-(void)setShouldClear:(BOOL)arg1 ;
-(id)generateAction;
-(id)postMetricsWithBag:(id)arg1 ;
-(id)postMetricsWithBagContract:(id)arg1 ;
-(id)performActionsWithContract:(id)arg1 account:(id)arg2 ;
-(void)setBackingIdentifier:(NSString *)arg1 ;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(BOOL)shouldClear;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)parentIdentifier;
@end
