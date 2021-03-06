/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * siriRemoteInputIdentifier; 
@property (readonly) unsigned long long siriInputSource; 
@property (readonly) BOOL supportsSoftwareVolume; 
@property (readonly) BOOL supportsDoAP; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * outputs; 
-(id)init;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(BOOL)supportsSoftwareVolume;
-(NSString *)siriRemoteInputIdentifier;
-(NSArray *)outputs;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRawDescription:(id)arg1 owningSession:(id)arg2 ;
-(unsigned long long)siriInputSource;
-(RouteDescriptionImpl*)privateGetImplementation;
-(NSArray *)inputs;
-(BOOL)supportsDoAP;
-(void)dealloc;
@end

