/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CXCallSource.h>

@protocol NSCopying;
@class CXProviderExtensionHostContext, NSExtension;

@interface CXExtensionCallSource : CXCallSource {

	CXProviderExtensionHostContext* _extensionContext;
	NSExtension* _extension;
	id<NSCopying> _requestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) CXProviderExtensionHostContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
-(void)setRequestIdentifier:(id<NSCopying>)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(id)init;
-(id)identifier;
-(id<NSCopying>)requestIdentifier;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)vendorProtocolDelegate;
-(id)bundle;
-(void)setExtensionContext:(CXProviderExtensionHostContext *)arg1 ;
-(int)processIdentifier;
-(CXProviderExtensionHostContext *)extensionContext;
-(NSExtension *)extension;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
@end

