/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/WBSSiteMetadataManager.h>

@class _SFFaviconProvider, _SFPasswordTouchIconCache, _SFTouchIconCache, WBSLeadImageCache, _SFLinkPresentationIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager {

	_SFFaviconProvider* _faviconProvider;
	_SFPasswordTouchIconCache* _passwordTouchIconCache;
	_SFTouchIconCache* _touchIconCache;
	WBSLeadImageCache* _leadImageCache;
	_SFLinkPresentationIconCache* _linkPresentationIconCache;

}

@property (nonatomic,readonly) _SFFaviconProvider * faviconProvider;                                  //@synthesize faviconProvider=_faviconProvider - In the implementation block
@property (nonatomic,readonly) _SFPasswordTouchIconCache * passwordTouchIconCache;                    //@synthesize passwordTouchIconCache=_passwordTouchIconCache - In the implementation block
@property (nonatomic,readonly) _SFTouchIconCache * touchIconCache;                                    //@synthesize touchIconCache=_touchIconCache - In the implementation block
@property (nonatomic,readonly) WBSLeadImageCache * leadImageCache;                                    //@synthesize leadImageCache=_leadImageCache - In the implementation block
@property (nonatomic,readonly) _SFLinkPresentationIconCache * linkPresentationIconCache;              //@synthesize linkPresentationIconCache=_linkPresentationIconCache - In the implementation block
+(void)setSharedSiteMetadataManagerProvider:(id)arg1 ;
+(id)sharedSiteMetadataManager;
+(void)setSharedSiteMetadataManager:(id)arg1 ;
-(id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(BOOL)arg3 metadataType:(unsigned long long)arg4 ;
-(_SFLinkPresentationIconCache *)linkPresentationIconCache;
-(void)scheduleLowPriorityRequestForBookmarks:(id)arg1 ;
-(WBSLeadImageCache *)leadImageCache;
-(_SFTouchIconCache *)touchIconCache;
-(_SFPasswordTouchIconCache *)passwordTouchIconCache;
-(_SFFaviconProvider *)faviconProvider;
@end

