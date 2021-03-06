/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSCertificateWarningPagePresenter.h>

@protocol WBSCertificateWarningPageHandler;
@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface, WBSCertificateWarningPageContext, NSString;

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter> {

	_SFWebProcessPlugInPageController* _pageController;
	_WKRemoteObjectInterface* _certificateWarningPagePresenterInterface;
	WBSCertificateWarningPageContext* _warningPageContext;
	id<WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clearCertificateWarningPagePresenterInterface;
-(void)certificateWarningPageLoaded;
-(void)showCertificateInformation;
-(void)prepareCertificateWarningPage:(id)arg1 ;
-(void)_setUpCertificateWarningPagePresenterInterface;
-(void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)goBackSelected;
-(void)openClockSettings;
-(id)_certificateWarningPageHandlerProxy;
-(void)visitInsecureWebsiteWithTemporaryBypass;
-(void)visitInsecureWebsite;
-(id)initWithPageController:(id)arg1 ;
-(void)dealloc;
@end

