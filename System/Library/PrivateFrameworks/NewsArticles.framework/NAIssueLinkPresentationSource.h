/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSString, LPImage, NSURL;

@interface NAIssueLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {

	NSString* _title;
	NSString* _subtitle;
	LPImage* _linkPresentationImage;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) LPImage * linkPresentationImage;              //@synthesize linkPresentationImage=_linkPresentationImage - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(NSURL *)url;
-(NSString *)subtitle;
-(NSString *)title;
-(id)titleFromIssue:(id)arg1 ;
-(id)subtitleFromIssue:(id)arg1 ;
-(id)linkPresentationImageFromIssue:(id)arg1 ;
-(id)urlFromIssue:(id)arg1 ;
-(LPImage *)linkPresentationImage;
-(id)initWithIssue:(id)arg1 ;
@end
