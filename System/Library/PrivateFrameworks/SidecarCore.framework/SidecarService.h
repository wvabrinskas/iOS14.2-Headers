/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SidecarDevice, NSString, NSArray;

@interface SidecarService : NSObject {

	SidecarDevice* _targetDevice;

}

@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) NSString * serviceExtension; 
@property (nonatomic,readonly) NSString * localizedItemName; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) NSArray * returnTypes; 
@property (nonatomic,readonly) NSArray * sendTypes; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * pasteboardTypes; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(id)services;
+(id)name;
+(id)supportedPasteboardTypes;
+(id)allServices;
+(id)extensionForIdentifier:(id)arg1 ;
+(id)serviceWithName:(id)arg1 ;
+(id)returnTypes;
+(long long)minimumRapportVersion;
+(id)serviceWithIdentifier:(id)arg1 ;
+(id)menuServices;
+(id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2 ;
+(id)allReturnTypes;
+(id)allMenuServices;
+(id)servicesForPasteboardTypes:(id)arg1 ;
+(id)allSendTypes;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(id)init;
-(NSString *)localizedDescription;
-(NSString *)name;
-(NSString *)serviceExtension;
-(NSArray *)pasteboardTypes;
-(BOOL)isEnabled;
-(NSArray *)devices;
-(NSArray *)returnTypes;
-(id)makeRequest;
-(NSString *)localizedItemName;
-(id)mutableRequestMessage;
-(NSArray *)sendTypes;
-(id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3 ;
-(id)makeRequestToDevice:(id)arg1 ;
-(id)copyWithDevice:(id)arg1 ;
@end

