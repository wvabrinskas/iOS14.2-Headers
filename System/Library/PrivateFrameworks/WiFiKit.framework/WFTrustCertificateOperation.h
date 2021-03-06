/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WFOperation.h>
#import <libobjc.A.dylib/TrustCertificateViewControllerDelegate.h>

@class NSArray, TrustCertificateViewController, UIViewController, NSString;

@interface WFTrustCertificateOperation : WFOperation <TrustCertificateViewControllerDelegate> {

	BOOL _accepted;
	NSArray* _certificateChain;
	TrustCertificateViewController* _trustVc;
	UIViewController* _rootViewController;

}

@property (nonatomic,retain) TrustCertificateViewController * trustVc;              //@synthesize trustVc=_trustVc - In the implementation block
@property (nonatomic,retain) NSArray * certificateChain;                            //@synthesize certificateChain=_certificateChain - In the implementation block
@property (assign,nonatomic) BOOL accepted;                                         //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                 //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(void)start;
-(NSArray *)certificateChain;
-(BOOL)accepted;
-(TrustCertificateViewController *)trustVc;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(id)initWithCertificateChain:(id)arg1 rootViewController:(id)arg2 ;
-(void)setTrustVc:(TrustCertificateViewController *)arg1 ;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
@end

