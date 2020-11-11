/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	BOOL _dynamic;
	BOOL _usesPreciseCollisionDetection;
	BOOL _allowsRotation;
	BOOL _pinned;
	BOOL _resting;
	BOOL _affectedByGravity;
	unsigned _fieldBitMask;
	unsigned _categoryBitMask;
	unsigned _collisionBitMask;
	unsigned _contactTestBitMask;
	double _friction;
	double _charge;
	double _restitution;
	double _linearDamping;
	double _angularDamping;
	double _density;
	double _mass;
	double _area;
	NSArray* _joints;
	SKNode* _node;
	double _angularVelocity;
	CGVector _velocity;

}

@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;                   //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection;              //@synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                             //@synthesize allowsRotation=_allowsRotation - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                     //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isResting,nonatomic) BOOL resting;                   //@synthesize resting=_resting - In the implementation block
@property (assign,nonatomic) double friction;                                 //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double charge;                                   //@synthesize charge=_charge - In the implementation block
@property (assign,nonatomic) double restitution;                              //@synthesize restitution=_restitution - In the implementation block
@property (assign,nonatomic) double linearDamping;                            //@synthesize linearDamping=_linearDamping - In the implementation block
@property (assign,nonatomic) double angularDamping;                           //@synthesize angularDamping=_angularDamping - In the implementation block
@property (assign,nonatomic) double density;                                  //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) double mass;                                     //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) double area;                                   //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) BOOL affectedByGravity;                          //@synthesize affectedByGravity=_affectedByGravity - In the implementation block
@property (assign,nonatomic) unsigned fieldBitMask;                           //@synthesize fieldBitMask=_fieldBitMask - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask;                        //@synthesize categoryBitMask=_categoryBitMask - In the implementation block
@property (assign,nonatomic) unsigned collisionBitMask;                       //@synthesize collisionBitMask=_collisionBitMask - In the implementation block
@property (assign,nonatomic) unsigned contactTestBitMask;                     //@synthesize contactTestBitMask=_contactTestBitMask - In the implementation block
@property (nonatomic,readonly) NSArray * joints;                              //@synthesize joints=_joints - In the implementation block
@property (nonatomic,__weak,readonly) SKNode * node;                          //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGVector velocity;                               //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double angularVelocity;                          //@synthesize angularVelocity=_angularVelocity - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(CGSize)arg3 accuracy:(float)arg4 ;
+(id)bodyWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(CGSize)arg3 ;
+(id)bodyWithEdgeLoopFromRect:(CGRect)arg1 ;
+(id)bodyWithTexture:(id)arg1 size:(CGSize)arg2 ;
-(double)friction;
-(BOOL)pinned;
-(double)charge;
-(void)setFriction:(double)arg1 ;
-(BOOL)isDynamic;
-(void)setPinned:(BOOL)arg1 ;
-(double)mass;
-(SKNode *)node;
-(double)density;
-(double)area;
-(void)setDensity:(double)arg1 ;
-(double)restitution;
-(void)setMass:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)affectedByGravity;
-(BOOL)allowsRotation;
-(double)angularVelocity;
-(void)setDynamic:(BOOL)arg1 ;
-(NSArray *)joints;
-(BOOL)usesPreciseCollisionDetection;
-(void)setResting:(BOOL)arg1 ;
-(void)setVelocity:(CGVector)arg1 ;
-(unsigned)collisionBitMask;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(BOOL)isResting;
-(void)setCharge:(double)arg1 ;
-(CGVector)velocity;
-(void)setFieldBitMask:(unsigned)arg1 ;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(double)angularDamping;
-(void)setLinearDamping:(double)arg1 ;
-(void)setAngularVelocity:(double)arg1 ;
-(void)setAngularDamping:(double)arg1 ;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)fieldBitMask;
-(double)linearDamping;
-(void)applyImpulse:(CGVector)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)categoryBitMask;
-(void)setRestitution:(double)arg1 ;
-(void)applyForce:(CGVector)arg1 ;
-(unsigned)contactTestBitMask;
-(void)applyForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyTorque:(double)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyAngularImpulse:(double)arg1 ;
-(id)allContactedBodies;
@end
