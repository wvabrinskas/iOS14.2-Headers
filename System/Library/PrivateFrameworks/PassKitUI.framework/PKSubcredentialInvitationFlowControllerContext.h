/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSubcredentialProvisioningFlowControllerContext.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKAppletSubcredentialSharingInvitation;

@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {

	BOOL _acceptLocalDeviceInvitation;
	BOOL _acceptRemoteDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _localDeviceInvitation;
	PKAppletSubcredentialSharingInvitation* _remoteDeviceInvitation;

}

@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * localDeviceInvitation;               //@synthesize localDeviceInvitation=_localDeviceInvitation - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingInvitation * remoteDeviceInvitation;              //@synthesize remoteDeviceInvitation=_remoteDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL acceptLocalDeviceInvitation;                                             //@synthesize acceptLocalDeviceInvitation=_acceptLocalDeviceInvitation - In the implementation block
@property (assign,nonatomic) BOOL acceptRemoteDeviceInvitation;                                            //@synthesize acceptRemoteDeviceInvitation=_acceptRemoteDeviceInvitation - In the implementation block
-(void)setAcceptLocalDeviceInvitation:(BOOL)arg1 ;
-(void)setAcceptRemoteDeviceInvitation:(BOOL)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)localDeviceInvitation;
-(BOOL)acceptRemoteDeviceInvitation;
-(BOOL)acceptLocalDeviceInvitation;
-(void)setRemoteDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3 ;
-(void)setLocalDeviceInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)remoteDeviceInvitation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
