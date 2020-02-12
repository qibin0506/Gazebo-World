#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginWelcome : public WorldPlugin
  {
    public: WorldPluginWelcome() : WorldPlugin()
            {
              printf("Welcome to ’s World!");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcome)
}
