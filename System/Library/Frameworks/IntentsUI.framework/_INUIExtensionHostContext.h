/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_INUIExtensionContextHosting.h>

@protocol INUIExtensionHostContextDelegate;
@class NSString;

@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting> {

	id<INUIExtensionHostContextDelegate> _extensionHostContextDelegate;

}

@property (assign,nonatomic,__weak) id<INUIExtensionHostContextDelegate> extensionHostContextDelegate;              //@synthesize extensionHostContextDelegate=_extensionHostContextDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)willBeginEditing;
-(void)requestHandlingOfIntent:(id)arg1 ;
-(void)setExtensionContextState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorHandlingExtensionContextProxy;
-(id<INUIExtensionHostContextDelegate>)extensionHostContextDelegate;
-(void)setExtensionHostContextDelegate:(id<INUIExtensionHostContextDelegate>)arg1 ;
@end
