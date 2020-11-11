/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, AMSMetricsEvent, NSURLRequest, AMSDialogRequest, NSMutableDictionary, NSDictionary;

@interface AMSDialogAction : NSObject <NSSecureCoding, NSCopying> {

	BOOL _inferLinkDestination;
	BOOL _shouldRetry;
	NSURL* _deepLink;
	NSString* _identifier;
	AMSMetricsEvent* _metricsEvent;
	NSURLRequest* _request;
	long long _style;
	AMSDialogRequest* _dialogRequest;
	NSString* _title;
	NSMutableDictionary* _userInfo;

}

@property (assign,setter=ams_setCommerceUIURL:,nonatomic) BOOL ams_commerceUIURL; 
@property (assign,setter=ams_setActionType:,nonatomic) long long ams_actionType; 
@property (setter=ams_setBuyParams:,nonatomic,retain) NSString * ams_buyParams; 
@property (setter=ams_setButtonDictionary:,nonatomic,retain) NSDictionary * ams_buttonDictionary; 
@property (assign,setter=ams_setResolvedInterruption:,nonatomic) BOOL ams_resolvedInterruption; 
@property (setter=ams_setSubtarget:,nonatomic,retain) NSString * ams_subtarget; 
@property (setter=ams_setRawURL:,nonatomic,retain) NSURL * ams_rawURL; 
@property (assign,setter=ams_setURLType:,nonatomic) long long ams_URLType; 
@property (nonatomic,copy) NSURL * deepLink;                                                                   //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL inferLinkDestination;                                                        //@synthesize inferLinkDestination=_inferLinkDestination - In the implementation block
@property (nonatomic,copy) AMSMetricsEvent * metricsEvent;                                                     //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,copy) NSURLRequest * request;                                                             //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long style;                                                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) AMSDialogRequest * dialogRequest;                                                   //@synthesize dialogRequest=_dialogRequest - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * userInfo;                                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                                                 //@synthesize shouldRetry=_shouldRetry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg1 identifier:(id)arg2 ;
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 ;
+(id)actionWithTitle:(id)arg1 ;
-(NSURLRequest *)request;
-(NSMutableDictionary *)userInfo;
-(id)init;
-(void)setDeepLink:(NSURL *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)identifier;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(BOOL)shouldRetry;
-(id)description;
-(void)setShouldRetry:(BOOL)arg1 ;
-(AMSDialogRequest *)dialogRequest;
-(BOOL)inferLinkDestination;
-(void)setDialogRequest:(AMSDialogRequest *)arg1 ;
-(void)setInferLinkDestination:(BOOL)arg1 ;
-(long long)style;
-(NSURL *)ams_rawURL;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)ams_actionType;
-(NSString *)ams_subtarget;
-(NSDictionary *)ams_buttonDictionary;
-(void)ams_setButtonDictionary:(id)arg1 ;
-(NSString *)ams_buyParams;
-(void)ams_setActionType:(long long)arg1 ;
-(BOOL)ams_commerceUIURL;
-(BOOL)ams_resolvedInterruption;
-(void)ams_setBuyParams:(id)arg1 ;
-(void)ams_setCommerceUIURL:(BOOL)arg1 ;
-(void)ams_setResolvedInterruption:(BOOL)arg1 ;
-(void)ams_setSubtarget:(id)arg1 ;
-(void)ams_setRawURL:(id)arg1 ;
-(void)ams_setURLType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)deepLink;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)ams_URLType;
-(void)setStyle:(long long)arg1 ;
@end
