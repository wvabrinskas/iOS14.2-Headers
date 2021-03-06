/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _SFPrintControllerDelegate <NSObject>
@optional
-(id)URLStringForPrintController:(id)arg1;
-(id)pageTitleForPrintController:(id)arg1;
-(id)loadingDialogPageTitleForPrintController:(id)arg1;
-(void)printController:(id)arg1 didCreatePrintInfo:(id)arg2;

@required
-(BOOL)printControllerPageIsLoading:(id)arg1;
-(BOOL)printControllerShouldPrintReader:(id)arg1;
-(BOOL)printControllerCanPresentPrintUI:(id)arg1;
-(id)presentingViewControllerForPrintController:(id)arg1;

@end

