/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol> {

	RPVideoEditorHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPVideoEditorHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)extensionObjectProxy;
-(void)setHostViewController:(RPVideoEditorHostViewController *)arg1 ;
-(RPVideoEditorHostViewController *)hostViewController;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end
