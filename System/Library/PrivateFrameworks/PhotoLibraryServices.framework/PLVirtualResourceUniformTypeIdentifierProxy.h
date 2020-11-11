/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLUniformTypeIdentifierIdentity;
@class NSString;

@interface PLVirtualResourceUniformTypeIdentifierProxy : NSObject {

	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentiferID;

}

@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentiferID;              //@synthesize uniformTypeIdentiferID=_uniformTypeIdentiferID - In the implementation block
@property (nonatomic,readonly) BOOL conformsToImage; 
@property (nonatomic,readonly) NSString * identifier; 
-(NSString *)identifier;
-(BOOL)conformsToImage;
-(id)initWithUniformTypeIdentiferID:(id)arg1 ;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentiferID;
-(void)setUniformTypeIdentiferID:(id<PLUniformTypeIdentifierIdentity>)arg1 ;
@end
