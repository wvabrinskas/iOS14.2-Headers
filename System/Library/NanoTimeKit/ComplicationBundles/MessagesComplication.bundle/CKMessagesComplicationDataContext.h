/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/NanoTimeKit/ComplicationBundles/MessagesComplication.bundle/MessagesComplication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MessagesComplication/MessagesComplication-Structs.h>
@class NSString, NSDictionary;

@interface CKMessagesComplicationDataContext : NSObject {

	long long _family;
	unsigned long long _unreadCount;
	NSString* _bubbleText;
	NSDictionary* _textAttributes;
	CGPoint _bubbleTextOrigin;
	CGRect _backgroundFrame;
	CGRect _imageFrame;

}

@property (assign,nonatomic) long long family;                            //@synthesize family=_family - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (assign,nonatomic) CGRect backgroundFrame;                      //@synthesize backgroundFrame=_backgroundFrame - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                           //@synthesize imageFrame=_imageFrame - In the implementation block
@property (nonatomic,copy) NSString * bubbleText;                         //@synthesize bubbleText=_bubbleText - In the implementation block
@property (assign,nonatomic) CGPoint bubbleTextOrigin;                    //@synthesize bubbleTextOrigin=_bubbleTextOrigin - In the implementation block
@property (nonatomic,retain) NSDictionary * textAttributes;               //@synthesize textAttributes=_textAttributes - In the implementation block
-(CGRect)backgroundFrame;
-(id)init;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(unsigned long long)unreadCount;
-(void)setImageFrame:(CGRect)arg1 ;
-(long long)family;
-(CGRect)imageFrame;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(void)setFamily:(long long)arg1 ;
-(id)initWithUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3 specs:(id)arg4 ;
-(NSString *)bubbleText;
-(CGPoint)bubbleTextOrigin;
-(void)setBackgroundFrame:(CGRect)arg1 ;
-(void)setBubbleTextOrigin:(CGPoint)arg1 ;
-(void)setBubbleText:(NSString *)arg1 ;
@end

